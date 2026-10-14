// sub_0807A074 at 0x0807A074 (thumb)

undefined4 sub_0807A074(int param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 0x8c);
  if ((*puVar2 & 0x200) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08079FA0(param_1);
    return in_lr;
  }
  iVar1 = sub_08065A24(param_1);
  if (iVar1 != 0) {
    return in_lr;
  }
  if ((*puVar2 & 1) == 0) {
LAB_0807a0f4:
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) goto LAB_0807a108;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x2c);
    if (iVar1 == 0) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833ffbc);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) goto LAB_0807a108;
      *(undefined *)(param_1 + 0xb8) = *(undefined *)(param_1 + 0xd);
      *(undefined *)(param_1 + 0xd) = 6;
      *(undefined *)(param_1 + 0xe) = 0;
      goto LAB_0807a0f4;
    }
  }
  iVar1 = sub_0801E4D8(iVar1);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
LAB_0807a108:
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833ffa0 + (uint)*(byte *)(param_1 + 0xd) * 4));
  return in_lr;
}

