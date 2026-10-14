// sub_080390D0 at 0x080390D0 (thumb)

undefined4 sub_080390D0(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) != '\0') {
    sub_08029778(param_1,0);
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 0x73) != '\x03') goto LAB_08039156;
    sub_08029778(param_1,2);
  }
  else {
    if (1 < bVar1) {
      if (((bVar1 == 2) && (*(char *)(param_1 + 0x73) == '\x03')) &&
         ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) != 0)) {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 1;
      }
      goto LAB_08039156;
    }
    if (bVar1 != 0) goto LAB_08039156;
    iVar2 = *(int *)(param_1 + 0x50) + 0x100;
    *(int *)(param_1 + 0x50) = iVar2;
    if (iVar2 < *(int *)(param_1 + 0xbc)) goto LAB_08039156;
    sub_08029778(param_1,1);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0xbc);
  }
  *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
LAB_08039156:
  sub_080297C0(param_1);
  return in_lr;
}

