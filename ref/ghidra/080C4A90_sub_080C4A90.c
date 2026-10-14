// sub_080C4A90 at 0x080C4A90 (thumb)

undefined8 sub_080C4A90(int param_1,int param_2)

{
  undefined uVar1;
  byte bVar2;
  char cVar3;
  undefined uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  if (0 < param_2 * 0x1000000) {
    bVar2 = (byte)DAT_02004ca8;
    if ((DAT_02004ca8 & 2) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x10);
      uVar1 = *(undefined *)(param_1 + 4);
      uVar4 = *(undefined *)(param_1 + 5);
      cVar3 = sub_080B4DA4(uVar6,uVar1,uVar4);
      uVar4 = sub_080B4ABC(uVar6,uVar1,uVar4);
      cVar5 = sub_080B4DA4(uVar6,uVar1,uVar4);
      if (cVar5 == cVar3) {
        cVar3 = sub_080B4DEC(cVar5,cVar5);
        if (cVar3 == '\0') {
          sub_080C4C24(uVar6,cVar5);
        }
        else {
          *(byte *)(param_1 + 1) = bVar2 & 2;
          *(undefined2 *)(param_1 + 2) = 1;
          sub_08001EAC(0x29);
        }
      }
      else {
        *(undefined *)(param_1 + 5) = uVar4;
        sub_08001EAC(0x29);
        sub_080C4C24(uVar6,cVar5);
      }
    }
    else {
      *(undefined *)(param_1 + 1) = 0;
      *(undefined2 *)(param_1 + 2) = 1;
      sub_08001EAC(0x28);
    }
  }
  return CONCAT44(in_lr,1);
}

