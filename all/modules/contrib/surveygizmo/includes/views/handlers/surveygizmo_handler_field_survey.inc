<?php
/**
 * @file
 * Contains the basic survey entity handler.
 */

/**
 * Field handler to provide simple renderer that allows linking to a product.
 */
class SurveygizmoHandlerFieldSurvey extends views_handler_field {
  /**
   * Init method.
   *
   * @inheritdoc
   */
  public function init(&$view, &$options) {
    parent::init($view, $options);

    if (!empty($this->options['link_to_survey'])) {
      $this->additional_fields['survey_id'] = 'survey_id';
    }
  }

  /**
   * Option definition.
   *
   * @inheritdoc
   */
  public function option_definition() {
    $options = parent::option_definition();

    $options['link_to_survey'] = array('default' => FALSE);

    return $options;
  }

  /**
   * Provide the link to product option.
   */
  public function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    $form['link_to_survey'] = array(
      '#title'         => t("Link this field to the survey view page"),
      '#description'   => t('This will override any other link you have set.'),
      '#type'          => 'checkbox',
      '#default_value' => !empty($this->options['link_to_survey']),
    );
  }

  /**
   * Render whatever the data is as a link to the product.
   *
   * Data should be made XSS safe prior to calling this function.
   */
  public function render_link($data, $values) {
    if (!empty($this->options['link_to_survey']) && $data !== NULL && $data !== '') {
      $survey_id = $this->get_value($values, 'survey_id');
      $this->options['alter']['make_link'] = TRUE;
      $this->options['alter']['path'] = 'admin/acronis/products/' . $survey_id;
    }
    return $data;
  }

  /**
   * Render method.
   */
  public function render($values) {
    $value = $this->get_value($values);
    return $this->render_link($this->sanitize_value($value), $values);
  }

}
