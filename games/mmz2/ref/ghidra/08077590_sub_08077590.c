// sub_08077590 at 0x08077590 (thumb)

undefined4 sub_08077590(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  
  uVar2 = *(uint *)(param_1 + 0x8c);
  if ((uVar2 & 0x200) == 0) {
    if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      iVar1 = sub_0801E11C(0,param_1,&DAT_0833fc54);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 != 0) {
        *(undefined *)(param_1 + 0xd) = 0xb;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    if ((*(uint *)(param_1 + 0x8c) & 4) == 0) {
      sub_080EF118(param_1,*(undefined4 *)(&UNK_0833fc24 + (uint)*(byte *)(param_1 + 0xd) * 4));
      return in_lr;
    }
    *(undefined *)(param_1 + 0xb4) = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(uint *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  else {
    if (((uVar2 & 0x10000) == 0) || ((uVar2 & 0x8000) == 0)) {
      *(undefined *)(param_1 + 0xb4) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xb4) = 1;
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  sub_0807767C(param_1);
  return in_lr;
}

