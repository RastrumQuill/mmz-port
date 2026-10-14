// sub_0809FC50 at 0x0809FC50 (thumb)

undefined4 sub_0809FC50(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  puVar3 = (uint *)(param_1 + 0x8c);
  if ((*puVar3 & 1) != 0) {
    sub_08006984(9);
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
  if ((*puVar3 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    if (*(char *)(param_1 + 0xb9) == '\0') {
      if ((*puVar3 & 0x10000) == 0) {
        *(undefined *)(param_1 + 0xd) = 0;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      else {
        *(undefined *)(param_1 + 0xd) = 1;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xd) = 2;
      *(undefined *)(param_1 + 0xe) = 0;
      *(undefined *)(param_1 + 0xf) = 0;
    }
    sub_080A0168(param_1);
    return in_lr;
  }
  if (1 < *(byte *)(param_1 + 0xd)) {
    iVar2 = *(int *)(param_1 + 0xb4);
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xb4) = iVar2 + -1;
    }
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) == 0) {
LAB_0809fd5c:
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) goto LAB_0809fd70;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x2c);
    if (iVar2 == 0) {
      iVar2 = sub_0802AD94(0,param_1,&DAT_0885e478);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 == 0) goto LAB_0809fd70;
      if ((*(char *)(param_1 + 0xd) != '\0') && (*(char *)(param_1 + 0xd) != '\x05')) {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
        *(undefined *)(param_1 + 0xf) = 0;
      }
      goto LAB_0809fd5c;
    }
  }
  iVar2 = sub_0802B3CC(iVar2);
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0809fd70:
  sub_08128884(param_1,*(undefined4 *)(&DAT_0885e3ec + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

