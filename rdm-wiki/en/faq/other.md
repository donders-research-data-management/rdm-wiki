# Frequently asked questions

## Whom should I contact with questions?

During the pilot phase you can contact [Hurng-Chun (Hong) Lee](mailto:h.lee@donders.ru.nl), [Eric Maris](mailto:e.maris@donders.ru.nl) or [Robert Oostenveld](mailto:robert.oostenveld@donders.ru.nl) with all questions that you might have and that are not addressed here. Once the local research administration, ICT and lab support staff has been trained on using the RDM, they should be able to answer most of your questions.

## How can I create a user account?

In the default scenario, the research administrator is not involved in the creation of user accounts, because they are created automatically in a sign-up procedure as described in the [DI RDM Protocol for Researchers](protocols/researcher.md).

However, in some cases it may be necessary for the research administrator to initiate accounts for new users that cannot use the login procedure based on the user's organizational Identity Provider (IdP).

To provide some context for this issue, one must know that DACs and RDCs can only be accessed if the user has signed up against the RU or RUMCN IdP or a so-called trusted federated authentication infrastructure (SurfConext, EduGain). Potential users may not (anymore) have access to one of these identity providers. To help these potential users, they can be given an account in the RU’s Relation Management System (Relatie Beheer Systeem). A so-called E-account can be created with limited administrative work, and seems the most useful account type for this purpose. The essential requirement is that the account should allow the owner to make use of the IdP service of the RU. The collection manager will ask the research administrator to give a potential user an account in the RU’s Relation Management System.

At this moment, it is not possible to give access to potential users that do not have access to a trusted federated authentication infrastructure, neither via their employer nor via the RU’s Relation Management System. If this turns out to be a serious problem, it is in principle possible to allow the research administrator to create an internal account, involving a login ID and an initial password, thus bypassing IdP-based authentication. These self-created accounts have to be managed, and the requirements for this management are identical to the ones for the management of the E-accounts created by the RU’s Relation Management System. When this becomes necessary, the protocol will be updated with these requirements.

## How can I migrate my user account to another IdP?

Many users change organization and thereby also IdP. When a user signs up using the credentials (ID plus password) provided by this new organization, a new internal account is created specifically for his new organization. Importantly, when subsequently authenticating (logging in) using the credentials of his/her new organization, he/she cannot access the collections for which he/she is authorized if he authenticates against the IdP of his old organization. However, the research administrator can change the user's new internal account such that the user keeps his/her access to those collections also when authenticating against the IdP of his/her new organization. This change involves a migration of the old internal account such that it can be accessed via authenticating against the IdP of his/her new organization. For performing this migration, the research administrator has access to a portal in which he/she must change the value of the appropriate field.

To prevent misunderstanding, migrating the old internal account of a former RU employee such that it can be accessed by authenticating against the IdP of his new organization, does not imply that this user can still be manager in any of his old collections: these authorizations have to be modified by another collection manager or the research administrator.


