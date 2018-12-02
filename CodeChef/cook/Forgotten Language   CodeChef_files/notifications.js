/**
 * Created by abhijeet.pa on 23/03/15.
 */

$(function () {

    var formContainer = 'cc-notification-viewport';

    function showUpForm(obj)
    {
        var form = new DrupalAjaxForm(obj);
    }

    var showSetContestStartNotificationBox = function(contest_code,loginRequired)
    {
        var formURL = '/api/notification/form/ContestStartNotification/'+contest_code;
        invokeGenericModal(
            {
                message: Drupal.settings.formHTML,
                oneTime: false,
                id: 'notification-generic-popup-id-'+contest_code,
                areAllAllowed: false,
                isLoginRequired: loginRequired != undefined ? loginRequired :Drupal.settings.loginRequired,
                callback: showUpForm,
                closeCross:true,
                args:{
                    formContainerId: formContainer,
                    formURL: formURL,
                    loginRequired: true,
                    isFieldDescriptionInline: true,
                    isErrorInline: true
                }
            });
    };

    $('.contest-start-notification').click(function(){
        var contest_code = $(this).attr('data');
        showSetContestStartNotificationBox(contest_code,true);
    });

});