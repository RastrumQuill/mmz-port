// sub_0807C870 at 0x0807C870 (thumb)

undefined8 sub_0807C870(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar1 = sub_080253D8(0,param_1,&DAT_08364304);
    *(int *)(param_1 + 0xbc) = iVar1;
    if (iVar1 != 0) {
      bVar2 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar2 == 0x10) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
      else {
        if (bVar2 != 0x30) goto LAB_0807c8ba;
        *(undefined *)(param_1 + 0xd) = 3;
      }
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0807c8ba:
  return CONCAT44(in_lr,1);
}

