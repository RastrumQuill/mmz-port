// sub_08101928 at 0x08101928 (thumb)

undefined4 sub_08101928(int param_1)

{
  char cVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined4 in_lr;
  
  if (*(byte *)(*(int *)(param_1 + 0x28) + 0xc) < 2) {
    cVar1 = *(char *)(param_1 + 0x11);
    puVar6 = (uint *)(*(int *)(param_1 + 0x28) + 0xb4);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        uVar4 = *puVar6;
        uVar3 = 599;
      }
      else {
        uVar4 = *puVar6;
        uVar3 = 5999;
      }
      if (uVar4 <= uVar3) {
        *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
        return in_lr;
      }
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    if (cVar1 == '\0') {
      uVar3 = *puVar6;
      uVar5 = 0x3c;
    }
    else if (cVar1 == '\x01') {
      uVar3 = *puVar6;
      uVar5 = 600;
    }
    else {
      uVar3 = *puVar6;
      uVar5 = 6000;
    }
    uVar5 = sub_08128A24(uVar3,uVar5);
    sVar2 = sub_08128A9C(uVar5,10);
    *(short *)(param_1 + 0xc0) = sVar2 + 0x6700;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08865dc4 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

