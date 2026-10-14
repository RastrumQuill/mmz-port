// sub_0810AFE4 at 0x0810AFE4 (thumb)

undefined4 sub_0810AFE4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x63a8);
  if ((((*(char *)(iVar3 + 2) == '\0') || (*(byte *)(iVar3 + 3) < 3)) || (*(byte *)(iVar3 + 3) == 6)
      ) || ((*(char *)(iVar3 + 0xdf7) == '\0' ||
            (*(byte *)(iVar3 + 0xdda) <= *(byte *)(param_1 + 0x11))))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    return in_lr;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  cVar1 = *(char *)(iVar3 + 3);
  if (cVar1 == '\x03') {
    if (*(char *)(iVar4 + 0xc4) == *(char *)(iVar3 + 0xdd4 + (uint)*(byte *)(param_1 + 0x11)))
    goto LAB_0810b094;
    uVar2 = 0x4300;
  }
  else {
    if (cVar1 == '\x04') {
      if (*(char *)(iVar4 + 0xc5) != *(char *)(iVar3 + 0xdd4 + (uint)*(byte *)(param_1 + 0x11))) {
        uVar2 = 0x4300;
        goto LAB_0810b096;
      }
    }
    else {
      if (cVar1 != '\x05') goto LAB_0810b0b2;
      if (*(char *)(iVar4 + 0xc6) != *(char *)(iVar3 + 0xdd4 + (uint)*(byte *)(param_1 + 0x11))) {
        sub_0801CF00(param_1,0x4300);
        goto LAB_0810b0b2;
      }
    }
LAB_0810b094:
    uVar2 = 0x430b;
  }
LAB_0810b096:
  sub_0801CF00(param_1,uVar2);
LAB_0810b0b2:
  sub_0801CFF0(param_1);
  return in_lr;
}

