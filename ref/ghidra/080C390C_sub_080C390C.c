// sub_080C390C at 0x080C390C (thumb)

undefined8 sub_080C390C(int param_1,int param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  if (0 < param_2 * 0x1000000) {
    uVar5 = (uint)*(byte *)(param_1 + 5);
    iVar4 = *(int *)(param_1 + 0x10);
    if ((DAT_02004ca8 & 3) == 0) {
      if ((DAT_02004ca8 & 0x30) != 0) {
        iVar6 = 1;
        if ((DAT_02004ca8 & 0x20) != 0) {
          iVar6 = -1;
        }
        bVar1 = *(byte *)(iVar4 + 0x17b);
        uVar3 = uVar5;
        do {
          uVar3 = sub_080C8CB0(uVar3 + iVar6 + (uint)bVar1,(uint)bVar1);
        } while (*(char *)(iVar4 + 0x17c + uVar3) == '\0');
        if (uVar3 != uVar5) {
          sub_08001EAC(0x29);
        }
        *(char *)(param_1 + 5) = (char)uVar3;
      }
    }
    else {
      bVar1 = (byte)DAT_02004ca8;
      if ((DAT_02004ca8 & 2) == 0) {
        if (*(char *)(iVar4 + 0x17c + uVar5) != '\0') {
          *(undefined *)(param_1 + 2) = 2;
          *(byte *)(param_1 + 6) = bVar1 & 2;
          uVar2 = 2;
          goto LAB_080c39b8;
        }
        sub_08001EAC(0xc1);
      }
      else {
        *(undefined *)(param_1 + 1) = 0;
        sub_08001EAC(0x28);
      }
    }
  }
  uVar2 = 1;
LAB_080c39b8:
  return CONCAT44(in_lr,uVar2);
}

