// sub_0807724C at 0x0807724C (thumb)

undefined4 sub_0807724C(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((DAT_02030108 & 2) == 0) {
    if (*(char *)(param_1 + 0x10) != '\0') {
      iVar2 = *(int *)(param_1 + 0x28);
      if ((iVar2 != 0) && (1 < *(byte *)(iVar2 + 0xc))) {
        *(uint *)(param_1 + 0x28) = DAT_02030108 & 2;
        iVar2 = 0;
      }
      if ((DAT_02030108 & 0x40) != 0) {
        if (iVar2 != 0) {
          *(char *)(iVar2 + 0xb8) = *(char *)(iVar2 + 0xb8) + -1;
        }
        goto LAB_0807728e;
      }
    }
    cVar1 = sub_08076FDC(param_1);
    if (cVar1 == '\0') {
      sub_08077104(param_1);
      cVar1 = sub_08077074(param_1);
      if (cVar1 == '\0') {
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363a34 + (uint)*(byte *)(param_1 + 0xd) * 4));
        sub_080FE2C0(param_1,*(undefined4 *)(&DAT_08363a54 + (uint)*(byte *)(param_1 + 0xd) * 4));
      }
    }
  }
  else {
LAB_0807728e:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

