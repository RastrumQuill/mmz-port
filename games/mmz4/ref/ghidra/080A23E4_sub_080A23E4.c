// sub_080A23E4 at 0x080A23E4 (thumb)

undefined4 sub_080A23E4(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(0x18);
  }
  uVar1 = sub_0801FB14(&DAT_0202e9f8,param_1 + 0x54);
  if (0x8000 < uVar1) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *puVar3 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
    return in_lr;
  }
  if ((*puVar3 & 0x200) == 0) {
    if ((*puVar3 & 1) == 0) {
LAB_080a24b4:
      if (*(int *)(param_1 + 0x2c) != 0) {
LAB_080a24ba:
        iVar2 = sub_0802B3CC();
        if (iVar2 == 0) {
          return in_lr;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
        if (*(char *)(param_1 + 0xd) != '\0') {
          sub_08005784(param_1 + 0x74,&DAT_0885e7bc);
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x2c) != 0) goto LAB_080a24ba;
      iVar2 = sub_0802AD94(0,param_1,&DAT_0885e804);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        if (*(char *)(param_1 + 0xd) != '\0') {
          sub_08005784(param_1 + 0x74,&DAT_0885e7d4);
        }
        goto LAB_080a24b4;
      }
    }
    if (1 < *(byte *)(param_1 + 0xd)) {
      iVar2 = *(int *)(param_1 + 0xb4);
      if ((iVar2 != 0) && (iVar2 = iVar2 + -1, *(int *)(param_1 + 0xb4) = iVar2, iVar2 == 0)) {
        *(undefined4 *)(param_1 + 0xc) = 2;
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
        *(undefined *)(param_1 + 0xd) = 2;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
        goto LAB_080a2506;
      }
    }
    sub_08128884(param_1,*(undefined4 *)(&DAT_0885e7a0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb8) == '\0') {
      *(undefined *)(param_1 + 0xd) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xd) = 1;
    }
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined *)(param_1 + 0xf) = 0;
LAB_080a2506:
    sub_080A27A0(param_1);
  }
  return in_lr;
}

