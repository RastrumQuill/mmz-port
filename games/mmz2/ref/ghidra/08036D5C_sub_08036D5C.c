// sub_08036D5C at 0x08036D5C (thumb)

undefined8 sub_08036D5C(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0x210) & 2) != 0) {
    bVar1 = sub_08036CBC(param_1,0);
    if ((*(byte *)(param_1 + 0x196) & bVar1) == 0) {
      iVar4 = sub_08035494(param_1);
      iVar5 = sub_080354C4(param_1);
      bVar7 = *(byte *)(param_1 + 0x198 + (uint)*(byte *)(param_1 + 0x195));
      bVar1 = bVar1 & ~bVar7;
      if ((bVar1 & 0x10) != 0) {
        if (*(char *)(param_1 + 0x1f5) == '\x01') {
          bVar7 = 0;
        }
        else if (*(char *)(param_1 + 0x1f5) == '\x02') {
          bVar7 = *(byte *)(param_1 + 0x214);
        }
        else {
          bVar7 = bVar7 >> 7;
        }
        uVar6 = sub_08037B5C(param_1,0,bVar7);
        if ((*(char *)(param_1 + 0x222) != '\0') && (iVar5 <= (int)(uVar6 & 0xff)))
        goto LAB_08036e4c;
        if (iVar4 <= (int)(uVar6 & 0xff)) goto LAB_08036dba;
      }
      if ((bVar1 & 0x80) != 0) {
        uVar6 = sub_08037B5C(param_1,0,1);
        if ((*(char *)(param_1 + 0x222) != '\0') && (iVar5 <= (int)(uVar6 & 0xff)))
        goto LAB_08036e4c;
        if (iVar4 <= (int)(uVar6 & 0xff)) goto LAB_08036dba;
      }
    }
    else if (*(char *)(param_1 + 0x1fc) == '\t') {
      cVar2 = sub_0801EC5C(param_1,0,1);
      if (cVar2 != '\0') {
LAB_08036e4c:
        uVar3 = 2;
        goto LAB_08036e56;
      }
      cVar2 = sub_0801EC5C(param_1,0,0);
      if (cVar2 != '\0') {
LAB_08036dba:
        uVar3 = 1;
        goto LAB_08036e56;
      }
    }
  }
  uVar3 = 0;
LAB_08036e56:
  return CONCAT44(in_lr,uVar3);
}

