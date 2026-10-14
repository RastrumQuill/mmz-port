// sub_0808F55C at 0x0808F55C (thumb)

undefined4 sub_0808F55C(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    sub_080127E4(param_1,0x7800);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  sub_080128D4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(undefined4 *)(param_1 + 0x60) = 0xfffffe00;
  iVar4 = *(int *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0xb4);
  iVar7 = iVar4 - iVar5;
  if (iVar7 < 0) {
    iVar7 = iVar5 - iVar4;
  }
  if (iVar7 < 0x8001) {
    if (*(int *)(param_1 + 0xbc) < 0) {
      iVar7 = sub_08065A4C(param_1);
      iVar4 = *(int *)(iVar7 + 0x54) - *(int *)(param_1 + 0x54);
      if (iVar4 < 0) {
        iVar4 = *(int *)(param_1 + 0x54) - *(int *)(iVar7 + 0x54);
      }
      if (iVar4 < 0x3000) {
        bVar1 = 0 < iVar4;
        *(uint *)(param_1 + 0x5c) = (uint)bVar1 * 0x280 + -0x140;
        if (bVar1 == 0) {
          bVar3 = *(byte *)(param_1 + 10) & 0xef;
        }
        else {
          bVar3 = *(byte *)(param_1 + 10) | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(bool *)(param_1 + 0x4c) = bVar1;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      }
      else {
        *(int *)(param_1 + 0xbc) = 0x6000;
        bVar3 = *(byte *)(param_1 + 10);
        uVar6 = ~(uint)(bVar3 >> 4) & 1;
        if (uVar6 == 0) {
          bVar3 = bVar3 & 0xef;
        }
        else {
          bVar3 = bVar3 | 0x10;
        }
        *(byte *)(param_1 + 10) = bVar3;
        *(char *)(param_1 + 0x4c) = (char)uVar6;
        *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar6 << 4);
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      }
    }
  }
  else {
    iVar4 = iVar4 - *(int *)(param_1 + 0xb4);
    cVar2 = (char)(iVar4 >> 0x1f);
    *(int *)(param_1 + 0x5c) = (iVar4 >> 0x1f) * -0x280 + -0x140;
    if (iVar4 < 0) {
      bVar3 = *(byte *)(param_1 + 10) | 0x10;
    }
    else {
      bVar3 = *(byte *)(param_1 + 10) & 0xef;
    }
    *(byte *)(param_1 + 10) = bVar3;
    *(char *)(param_1 + 0x4c) = -cVar2;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | cVar2 * -0x10;
  }
  sub_080127E4(param_1,0x7801);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  return in_lr;
}

