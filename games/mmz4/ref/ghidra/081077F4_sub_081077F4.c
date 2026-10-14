// sub_081077F4 at 0x081077F4 (thumb)

undefined4 sub_081077F4(int param_1)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    if (7 < *(byte *)(param_1 + 0xb5)) {
      *(byte *)(param_1 + 0xb5) = *(char *)(*(int *)(param_1 + 0x28) + 0xb5) + 1;
    }
    *(undefined *)(param_1 + 0xb6) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  pbVar3 = (byte *)(param_1 + 0xb5);
  if ((*pbVar3 != 0) && (iVar2 = *(int *)(param_1 + 0x28), iVar2 != 0)) {
    if (*(byte *)(iVar2 + 0xc) < 2) {
      if (*(char *)(iVar2 + 0xd) == '\x01') {
        *pbVar3 = *(char *)(iVar2 + 0xb5) + 1;
        *(undefined *)(param_1 + 0xd) = 1;
      }
      else {
        uVar1 = *(byte *)(iVar2 + 0xb5) + 1;
        if (uVar1 == *pbVar3) {
          return in_lr;
        }
        *pbVar3 = (byte)uVar1;
        *(undefined *)(param_1 + 0xd) = 1;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
    else {
      *pbVar3 = *(byte *)(iVar2 + 0xb5);
      if (*(char *)(*(int *)(param_1 + 0x28) + 0xb4) == '\x01') {
        sub_08107A74(param_1);
      }
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x28);
      *(undefined *)(param_1 + 0xd) = 1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
  return in_lr;
}

