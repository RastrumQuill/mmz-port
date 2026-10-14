// sub_080F7D00 at 0x080F7D00 (thumb)

undefined4 sub_080F7D00(int param_1)

{
  undefined uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  puVar6 = (undefined4 *)((int)&DAT_0202daf0 + 1);
  if (*(char *)(param_1 + 0x11) == '\0') {
    puVar6 = &DAT_0202daf0;
  }
  uVar1 = *(undefined *)puVar6;
  cVar2 = sub_08128A9C(uVar1,3);
  if (cVar2 == '\x01') {
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = 'u';
      sub_08002B10();
    }
    iVar4 = *(int *)(param_1 + 0x58) + -0x100;
    *(int *)(param_1 + 0x58) = iVar4;
    uVar5 = sub_08128A24(uVar1,3);
    uVar5 = uVar5 & 0xff;
    iVar3 = *(int *)(&DAT_08866e2c + ((uint)*(byte *)(param_1 + 0x11) * 5 + uVar5) * 8);
    if (iVar3 <= iVar4) goto LAB_080f7dd4;
  }
  else {
    if (cVar2 != '\x02') goto LAB_080f7dd4;
    if (*(char *)(param_1 + 0xb5) == '\0') {
      *(char *)(param_1 + 0xb5) = 'u';
      sub_08002B10();
    }
    iVar4 = *(int *)(param_1 + 0x58) + 0x100;
    *(int *)(param_1 + 0x58) = iVar4;
    iVar3 = sub_08128A24(uVar1,3);
    uVar5 = iVar3 + 1U & 0xff;
    iVar3 = *(int *)(&DAT_08866e2c + ((uint)*(byte *)(param_1 + 0x11) * 5 + uVar5) * 8);
    if (iVar4 <= iVar3) goto LAB_080f7dd4;
  }
  *(int *)(param_1 + 0x58) = iVar3;
  *(char *)puVar6 = (char)uVar5 * '\x03';
  sub_08002B10(0x177);
  *(undefined *)(param_1 + 0xb5) = 0;
LAB_080f7dd4:
  sub_0801CFF0(param_1);
  return in_lr;
}

