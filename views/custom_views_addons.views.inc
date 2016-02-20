<?php
/**
 * Created by PhpStorm.
 * User: stefan
 * Date: 19.02.16
 * Time: 18:47
 */

/**
 * Implements hook_views_data_alter().
 */
function custom_views_addons_views_data_alter(&$data)
{

    if (isset($data['field_data_field_resp']) && isset($data['field_data_field_resp']['field_resp_value'])) {
        $arr = $data['field_data_field_resp']['field_resp_value'];

        $data['field_data_field_resp']['field_resp_value2'] = $arr;
        $data['field_data_field_resp']['field_resp_value2']['title'] = t('Custom main resp');
        $data['field_data_field_resp']['field_resp_value2']['group'] = t('Main resp');
        $data['field_data_field_resp']['field_resp_value2']['filter']['handler'] = 'custom_views_addons_handler_filter_main_resp';
    }
//    dpm($data);
}

