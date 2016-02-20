<?php
/**
 * Created by PhpStorm.
 * User: stefan
 * Date: 19.02.16
 * Time: 18:49
 */

/**
 * @file
 * Definition of views_handler_filter_field_list.
 */

/**
 * Filter handler which uses list-fields as options.
 *
 * @ingroup views_filter_handlers
 */
class custom_views_addons_handler_filter_main_resp extends views_handler_filter_field_list {

    function options_form(&$form, &$form_state) {
        // no options
    }

    function query() {
        // add here the calculation of a user's main responsibily
        $this->value = array(0,1);
        parent::query();
    }
}
