// sub_080998A0 at 0x080998A0 (thumb)

undefined8 sub_080998A0(int param_1)

{
  undefined uVar1;
  int iVar2;
  byte bVar3;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xbc) == 0) && ((*(uint *)(param_1 + 0x8c) & 1) != 0)) {
    iVar2 = sub_080253D8(0,param_1,&DAT_08366e38);
    *(int *)(param_1 + 0xbc) = iVar2;
    if (*(char *)(param_1 + 0xd) == '\x06') {
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
        uVar1 = 7;
      }
      else {
        if (bVar3 != 0x30) goto LAB_0809992a;
        *(undefined *)(param_1 + 0xc0) = 2;
        uVar1 = 9;
      }
      *(undefined *)(param_1 + 0xd) = uVar1;
      *(undefined *)(param_1 + 0xe) = 0;
    }
  }
LAB_0809992a:
  return CONCAT44(in_lr,1);
}

