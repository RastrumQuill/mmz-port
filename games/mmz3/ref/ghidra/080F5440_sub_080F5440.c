// sub_080F5440 at 0x080F5440 (thumb)

undefined8 sub_080F5440(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 in_lr;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 0x64ac);
  if ((param_2 & 0xff) == 0xff) {
    bVar3 = (*(byte *)(iVar1 + 0xcc) & 1) != 0;
    if (bVar3) {
      *(undefined *)(param_1 + 0xdd2) = 0;
    }
    uVar2 = (uint)bVar3;
    if ((*(byte *)(iVar1 + 0xcc) & 2) != 0) {
      *(undefined *)(param_1 + 0xdd2 + uVar2) = 1;
      uVar2 = uVar2 + 1;
    }
    if ((*(byte *)(iVar1 + 0xcc) & 4) != 0) {
      *(undefined *)(param_1 + 0xdd2 + uVar2) = 2;
      uVar2 = uVar2 + 1;
    }
    if ((*(byte *)(iVar1 + 0xcc) & 0x10) != 0) {
      *(undefined *)(param_1 + 0xdd2 + uVar2) = 4;
      uVar2 = uVar2 + 1;
    }
    if ((*(byte *)(iVar1 + 0xcc) & 0x20) != 0) {
      *(undefined *)(param_1 + 0xdd2 + uVar2) = 5;
      uVar2 = uVar2 + 1;
    }
    if ((*(byte *)(iVar1 + 0xcc) & 8) != 0) {
      *(undefined *)(param_1 + 0xdd2 + uVar2) = 3;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(byte *)(param_1 + 0xdd2 + (param_2 & 0xff));
  }
  return CONCAT44(in_lr,uVar2);
}

