// sub_080262DC at 0x080262DC (thumb)

undefined8 sub_080262DC(int param_1,undefined param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  undefined uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = 0;
  if ((*(byte *)(param_1 + 0x188) & 2) == 0) {
    if (2 < *(byte *)(param_1 + 0x124)) goto LAB_0802639c;
  }
  else if (*(byte *)(param_1 + 0x199) <= *(byte *)(param_1 + 0x124)) goto LAB_0802639c;
  iVar2 = sub_08026290(param_1);
  if ((iVar2 != 0) && (iVar7 = sub_08005458(DAT_02022e90), iVar7 != 0)) {
    cVar1 = sub_0801C6EC(param_1,0);
    *(char *)(iVar7 + 0x1e) = cVar1 + '\x01';
    *(undefined *)(iVar7 + 9) = 0;
    *(undefined4 *)(iVar7 + 0x14) = 0x8025d8d;
    uVar6 = *(undefined *)(param_1 + 0x19d);
    sub_08025D70(cVar1,0,uVar6);
    *(undefined *)(iVar7 + 0x10) = param_2;
    *(char *)(iVar7 + 0x11) = param_3;
    if (param_3 != '\x02') {
      uVar6 = 0;
    }
    *(undefined *)(iVar7 + 0x12) = uVar6;
    *(int *)(iVar7 + 0x20) = param_1;
    *(char *)(param_1 + 0x124) = *(char *)(param_1 + 0x124) + '\x01';
    uVar5 = 0;
    piVar3 = (int *)(param_1 + 0xd8);
    iVar2 = *piVar3;
    piVar4 = piVar3;
    while (iVar2 != 0) {
      piVar4 = piVar4 + 1;
      uVar5 = uVar5 + 1;
      if (3 < uVar5) goto LAB_0802639c;
      iVar2 = *piVar4;
    }
    if (uVar5 < 4) {
      piVar3[uVar5] = iVar7;
    }
  }
LAB_0802639c:
  return CONCAT44(in_lr,iVar7);
}

