// sub_08080B8C at 0x08080B8C (thumb)

undefined4 sub_08080B8C(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined uVar3;
  undefined4 in_lr;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  if ((uVar1 & 0x200) == 0) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar2 = 0x2d048;
    }
    else {
      iVar2 = 0x2d049;
    }
    (&DAT_02001000)[iVar2] = 1;
    if (((*(uint *)(param_1 + 0x8c) & 1) != 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      iVar2 = sub_0801E11C(0,param_1,&DAT_08340c4c);
      *(int *)(param_1 + 0x2c) = iVar2;
      if (iVar2 != 0) {
        *(undefined *)(param_1 + 0xd) = 4;
        *(undefined *)(param_1 + 0xe) = 0;
      }
    }
    sub_080EF118(param_1,*(undefined4 *)(&DAT_08340c2c + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    if ((uVar1 & 0x10000) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
      if ((uVar1 & 0x8000) != 0) {
        uVar3 = 2;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(undefined *)(param_1 + 0xd) = uVar3;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_08080C64(param_1);
  }
  return in_lr;
}

