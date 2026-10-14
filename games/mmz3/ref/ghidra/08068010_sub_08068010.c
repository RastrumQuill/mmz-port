// sub_08068010 at 0x08068010 (thumb)

undefined8 sub_08068010(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_080253D8(0,param_1,&DAT_08362800);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (*(char *)(param_1 + 0xd) == '\b') {
      if (iVar2 != 0) {
        bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
        if (bVar3 == 0x10) {
          *(undefined *)(param_1 + 0xc0) = 1;
        }
        else if (bVar3 == 0x30) {
          *(undefined *)(param_1 + 0xc0) = 2;
        }
      }
    }
    else if (iVar2 != 0) {
      bVar3 = *(byte *)(param_1 + 0x97) & 0xf0;
      if (bVar3 == 0x10) {
        *(undefined *)(param_1 + 0xc0) = 1;
        uVar1 = 5;
      }
      else {
        if (bVar3 != 0x30) goto LAB_0806809a;
        *(undefined *)(param_1 + 0xc0) = 2;
        uVar1 = 7;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0806809a:
  return CONCAT44(in_lr,1);
}

