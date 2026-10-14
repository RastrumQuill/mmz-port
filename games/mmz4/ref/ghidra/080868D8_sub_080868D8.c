// sub_080868D8 at 0x080868D8 (thumb)

undefined8 sub_080868D8(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 in_lr;
  
  uVar8 = 0;
  pcVar7 = (char *)(param_1 + 0xb5);
  if (*pcVar7 < '\x01') {
    if (-1 < *pcVar7) goto LAB_0808698a;
    pcVar6 = (char *)(param_1 + 0xb6);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + '\x01';
    puVar5 = (uint *)(param_1 + 0xb4);
    if (cVar1 == -1) {
      *(byte *)puVar5 = *(byte *)puVar5 + 0x17;
      bVar2 = sub_08128A9C(*(byte *)puVar5,0x18);
      *(byte *)puVar5 = bVar2;
      *pcVar6 = *pcVar7;
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885b908 + (uint)*(byte *)puVar5 * 4));
    }
    uVar3 = *puVar5;
    uVar4 = 0xff0000;
  }
  else {
    pcVar6 = (char *)(param_1 + 0xb6);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    puVar5 = (uint *)(param_1 + 0xb4);
    if ((char)(cVar1 + -1) == '\0') {
      *(byte *)puVar5 = *(byte *)puVar5 + 1;
      bVar2 = sub_08128A9C(*(byte *)puVar5,0x18);
      *(byte *)puVar5 = bVar2;
      *pcVar6 = *pcVar7;
      sub_0801CF00(param_1,*(undefined2 *)(&DAT_0885b908 + (uint)*(byte *)puVar5 * 4));
    }
    uVar3 = *puVar5;
    uVar4 = 0x10000;
  }
  if ((uVar3 & 0xff00ff) == uVar4) {
    uVar8 = 0xffffffff;
  }
LAB_0808698a:
  sub_0801CFF0(param_1);
  return CONCAT44(in_lr,uVar8);
}

