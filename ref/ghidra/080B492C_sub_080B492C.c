// sub_080B492C at 0x080B492C (thumb)

undefined8 sub_080B492C(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  if ((DAT_02004ca8 & 0xc0) != 0) {
    iVar5 = 1;
    if ((DAT_02004ca8 & 0x40) != 0) {
      iVar5 = -1;
    }
    cVar1 = sub_080B45B4(param_1,0,3);
    uVar4 = 3;
    if (cVar1 != '\0') {
      uVar4 = 4;
    }
    iVar2 = (int)param_2;
    param_2 = (char)(iVar2 + iVar5);
    uVar3 = (iVar2 + iVar5) * 0x1000000 >> 0x18;
    if ((int)uVar3 < 0) {
      param_2 = '\0';
    }
    else if (uVar4 <= uVar3) {
      param_2 = (char)uVar4 + -1;
    }
  }
  return CONCAT44(in_lr,(int)param_2);
}

