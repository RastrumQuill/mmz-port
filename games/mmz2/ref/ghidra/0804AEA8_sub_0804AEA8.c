// sub_0804AEA8 at 0x0804AEA8 (thumb)

undefined4 sub_0804AEA8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar1 = sub_0801E11C(0x12,param_1,&DAT_0833b5f4);
      *(int *)(param_1 + 0x2c) = iVar1;
      if (iVar1 == 0) {
        if ((byte)(*(byte *)(param_1 + 0xd) - 0x10) < 2) {
          return in_lr;
        }
        if (0x1e < *(byte *)(param_1 + 0xd)) {
          return in_lr;
        }
      }
    }
    *(undefined *)(param_1 + 0xd) = 0x10;
    *(undefined *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}

