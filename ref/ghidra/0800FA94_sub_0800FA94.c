// sub_0800FA94 at 0x0800FA94 (thumb)

undefined8 sub_0800FA94(char param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = 0;
  if (param_1 != '\0') {
    uVar2 = 0;
    goto LAB_0800fb2e;
  }
  DAT_02022b68 = DAT_02022b68 + 1;
  sub_0800FC20(&DAT_02022b60);
  iVar1 = sub_0800FC94(&DAT_02022b60);
  if (iVar1 == 0) {
    if ((DAT_02022b6e & 1) == 0) {
      sub_080C8A98(&DAT_02022b60,*(undefined4 *)(&DAT_0829fe04 + (uint)DAT_02022b60 * 4));
      goto LAB_0800fad4;
    }
  }
  else {
LAB_0800fad4:
    if ((DAT_02022b6e & 1) == 0) {
      uVar2 = ~(uint)DAT_02022b64 & 1;
    }
  }
  iVar1 = sub_08014464(&DAT_02022b6c);
  if (iVar1 == 0) {
    if (DAT_02022b60 == 1) {
      sub_0800FD40();
    }
  }
  else {
    uVar2 = ~(uint)DAT_02022b64 & 1;
  }
  if (DAT_02022c5c != '\0') {
    sub_0800E02C(&DAT_02022c7c);
  }
LAB_0800fb2e:
  return CONCAT44(in_lr,uVar2);
}

