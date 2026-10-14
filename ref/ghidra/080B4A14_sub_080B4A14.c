// sub_080B4A14 at 0x080B4A14 (thumb)

undefined8 sub_080B4A14(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 in_lr;
  
  cVar1 = sub_080B45B4(param_1,0,param_2 & 0xff);
  if (cVar1 == '\0') {
LAB_080b4aaa:
    iVar2 = -1;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    iVar2 = (param_2 & 0xff) * 4;
    uVar3 = (uint)**(byte **)(&DAT_082b7580 + iVar2);
    while ((uVar4 = uVar3, uVar4 == 0 ||
           (((int)(uint)*(byte *)(param_1 + 0x1a4 + (uVar4 >> 3)) >> (uVar4 & 7) & 1U) == 0))) {
      iVar5 = uVar7 * 10;
      do {
        uVar6 = uVar6 + 1;
        if (9 < uVar6) {
          uVar6 = sub_080C8CB0(uVar6,10);
          iVar5 = iVar5 + 10;
          uVar7 = uVar7 + 1;
          if (0xf < uVar7) goto LAB_080b4aaa;
        }
        uVar3 = (uint)*(byte *)(iVar5 + *(int *)(&DAT_082b7580 + iVar2) + uVar6);
      } while (uVar3 == uVar4);
    }
    iVar2 = (int)((uVar6 + uVar7 * 10) * 0x10000) >> 0x10;
  }
  return CONCAT44(in_lr,iVar2);
}

