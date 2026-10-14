// sub_080D5D30 at 0x080D5D30 (thumb)

undefined8 sub_080D5D30(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 in_lr;
  
  cVar1 = sub_080D5830(param_1,0,param_2);
  if (cVar1 == '\0') {
LAB_080d5dc0:
    iVar2 = -1;
  }
  else {
    uVar5 = 0;
    uVar6 = 0;
    uVar3 = (uint)**(byte **)(&DAT_0834a85c + param_2 * 4);
    while ((uVar4 = uVar3, uVar4 == 0 ||
           (((int)(uint)*(byte *)(param_1 + 0x228 + (uVar4 >> 3)) >> (uVar4 & 7) & 1U) == 0))) {
      iVar2 = uVar6 * 10;
      do {
        uVar5 = uVar5 + 1;
        if (9 < uVar5) {
          uVar5 = sub_080EF330(uVar5,10);
          iVar2 = iVar2 + 10;
          uVar6 = uVar6 + 1;
          if (0xf < uVar6) goto LAB_080d5dc0;
        }
        uVar3 = (uint)*(byte *)(iVar2 + *(int *)(&DAT_0834a85c + param_2 * 4) + uVar5);
      } while (uVar3 == uVar4);
    }
    iVar2 = (int)((uVar5 + uVar6 * 10) * 0x10000) >> 0x10;
  }
  return CONCAT44(in_lr,iVar2);
}

