// sub_08036F18 at 0x08036F18 (thumb)

undefined8 sub_08036F18(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  undefined4 in_lr;
  
  bVar1 = sub_08036CBC(param_1,2);
  if ((*(byte *)(param_1 + 0x196) & bVar1) == 0) {
    if (*(char *)(param_1 + 0x224) != '\0') {
      iVar4 = sub_08035534(param_1);
      bVar6 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
      bVar1 = bVar1 & ~bVar6;
      if ((bVar1 & 0x10) != 0) {
        if (*(char *)(param_1 + 0x1f5) == '\x01') {
          bVar6 = 0;
        }
        else if (*(char *)(param_1 + 0x1f5) == '\x02') {
          bVar6 = *(byte *)(param_1 + 0x214);
        }
        else {
          bVar6 = bVar6 >> 7;
        }
        uVar5 = sub_08037B5C(param_1,2,bVar6);
        if (iVar4 <= (int)(uVar5 & 0xff)) goto LAB_08036f50;
      }
      if (((bVar1 & 0x80) != 0) && (uVar5 = sub_08037B5C(param_1,2,1), iVar4 <= (int)(uVar5 & 0xff))
         ) goto LAB_08036f50;
    }
  }
  else if ((*(char *)(param_1 + 0x1fc) == '\t') &&
          (cVar2 = sub_0801EC5C(param_1,2,3), cVar2 != '\0')) {
LAB_08036f50:
    uVar3 = 1;
    goto LAB_08036fca;
  }
  uVar3 = 0;
LAB_08036fca:
  return CONCAT44(in_lr,uVar3);
}

