// sub_08057F88 at 0x08057F88 (thumb)

undefined4 sub_08057F88(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if ((*(uint *)(param_1 + 0x14) & 0x800) != 0) {
    *(int *)(iVar3 + 200) = iVar4;
  }
  if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
    *(int *)(iVar3 + 0xcc) = iVar4;
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x23) & 0xf0) == 0x10) {
      uVar1 = sub_0801E11C(10,iVar3,&DAT_0833cae8);
      *(undefined4 *)(iVar3 + 0x2c) = uVar1;
    }
    *(bool *)(iVar3 + 0xd4) = *(int *)(iVar3 + 0x54) < *(int *)(iVar4 + 0x54);
    if ((*(uint *)(param_1 + 0x14) & 0x10000) == 0) {
      uVar2 = *(uint *)(iVar3 + 0xbc) & 0xffffffdf;
    }
    else {
      uVar2 = *(uint *)(iVar3 + 0xbc) | 0x20;
    }
    *(uint *)(iVar3 + 0xbc) = uVar2;
  }
  return in_lr;
}

