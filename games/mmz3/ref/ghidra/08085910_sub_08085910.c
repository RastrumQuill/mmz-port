// sub_08085910 at 0x08085910 (thumb)

undefined8 sub_08085910(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08364cb0);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (*(int *)(param_1 + 0xbc) != 0) {
      bVar2 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar2 == 0x10) {
        sub_08007390(param_1 + 0x74,&DAT_08364c98);
      }
      else if (bVar2 == 0x30) {
        sub_08007390(param_1 + 0x74,&DAT_08364c98);
      }
    }
  }
  return CONCAT44(in_lr,1);
}

