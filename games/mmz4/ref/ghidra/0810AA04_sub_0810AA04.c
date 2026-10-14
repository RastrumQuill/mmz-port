// sub_0810AA04 at 0x0810AA04 (thumb)

undefined4 sub_0810AA04(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  if (((*(byte *)(iVar3 + 1) < 2) || (*(char *)(iVar3 + 2) == '\0')) ||
     (*(char *)(iVar3 + 3) == '\0')) {
LAB_0810aa2a:
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  bVar1 = *(byte *)(iVar3 + 0xdd2 + (uint)*(byte *)(param_1 + 0x11));
  uVar5 = (uint)bVar1;
  if (uVar5 == 0xff) goto LAB_0810aa2a;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  if (((int)(uint)*(byte *)(DAT_0202edac + (uint)(bVar1 >> 2)) >> (uVar5 & 3) + 4 & 1U) == 0) {
    cVar2 = sub_0811D2B0(uVar5);
    if (cVar2 == '\0') {
      sub_0801CF00(param_1,0x4302);
      goto LAB_0810aa88;
    }
    uVar4 = 0x4301;
  }
  else {
    uVar4 = 0x4300;
  }
  sub_0801CF00(param_1,uVar4);
LAB_0810aa88:
  sub_0801CFF0(param_1);
  return in_lr;
}

