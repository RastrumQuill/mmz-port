// sub_0807BB70 at 0x0807BB70 (thumb)

undefined8 sub_0807BB70(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_080253D8(0,param_1,&DAT_083641e4);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (iVar2 != 0) {
      bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar3 == 0x10) {
        uVar1 = 2;
      }
      else {
        if (bVar3 != 0x30) goto LAB_0807bbba;
        uVar1 = 4;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0807bbba:
  return CONCAT44(in_lr,1);
}

