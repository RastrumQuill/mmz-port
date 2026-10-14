// sub_0807D078 at 0x0807D078 (thumb)

undefined4 sub_0807D078(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 in_lr;
  
  uVar3 = *(uint *)(param_1 + 0x8c);
  if ((uVar3 & 0x200) == 0) {
    iVar1 = sub_08065A24(param_1);
    if (iVar1 == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        sub_080032EC(0x107);
        if (*(int *)(param_1 + 0x2c) == 0) {
          uVar2 = sub_0801E11C(0,param_1,&DAT_08340640);
          *(undefined4 *)(param_1 + 0x2c) = uVar2;
          *(undefined *)(param_1 + 0xd) = 5;
          *(undefined *)(param_1 + 0xe) = 0;
        }
        if (*(char *)(param_1 + 0xd) != '\a') {
          *(undefined *)(param_1 + 0xd) = 5;
          *(undefined *)(param_1 + 0xe) = 0;
        }
      }
      if ((*(int *)(param_1 + 0x2c) != 0) && (iVar1 = sub_0801E4D8(), iVar1 != 0)) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      sub_080EF118(param_1,*(undefined4 *)(&UNK_08340648 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    else if (*(int *)(param_1 + 0x2c) != 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
      sub_08006E08(param_1 + 0x74,&DAT_08340670);
    }
  }
  else {
    if ((uVar3 & 0x10000) == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = (byte)(-(uVar3 & 0x8000) >> 0x1f);
    }
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833d990 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    *(byte *)(param_1 + 0xd) = bVar4;
    *(undefined *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    sub_0807D16C(param_1);
  }
  return in_lr;
}

