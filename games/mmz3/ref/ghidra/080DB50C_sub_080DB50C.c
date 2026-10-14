// sub_080DB50C at 0x080DB50C (thumb)

undefined4 sub_080DB50C(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((DAT_02030104 & 0x10) == 0) {
    if (*(char *)(param_1 + 0x10) != '\0') goto LAB_080db54a;
  }
  else if (*(char *)(param_1 + 0x10) == '\0') goto LAB_080db54a;
  if (((DAT_02030104 & 1) == 0) || ((DAT_02002650 & 0x7f) == 0xf)) {
    sub_0801749C(param_1);
    sub_080176EC(param_1);
    *(undefined *)(param_1 + 0x25) = 0x1f;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    sub_0800736C(param_1 + 0x74,&DAT_0836dc20,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar1 = *(int *)(param_1 + 0x54) + 0x800;
    *(int *)(param_1 + 0x54) = iVar1;
    uVar2 = sub_0800A104(iVar1,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(undefined *)(param_1 + 0x11) = 0;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
    *(undefined *)(param_1 + 0xe) = 0;
    sub_080DB608(param_1);
    return in_lr;
  }
LAB_080db54a:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  return in_lr;
}

