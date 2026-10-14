// sub_0808DF18 at 0x0808DF18 (thumb)

undefined4 sub_0808DF18(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 in_lr;
  int local_28;
  int local_24;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 0xb9);
    if (uVar4 < 6) {
      do {
        sub_080C3D1C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),uVar4 & 0xff,
                     *(byte *)(param_1 + 10) >> 4 & 1);
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < 6);
    }
    uVar4 = (uint)(0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54));
    *(uint *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + uVar4 * -0x100;
    sub_08017700(param_1,0x740f);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_28 = *(int *)(param_1 + 0x54);
    local_24 = *(int *)(param_1 + 0x58);
    iVar2 = sub_08009B28(local_28,local_24 + 0x400);
    *(byte *)(param_1 + 0x13) = (byte)~(byte)((uint)iVar2 >> 0x18) >> 7;
    local_28 = uVar4 * -0xc0 + 0x60;
    local_24 = 0x60;
    if (iVar2 < 0) {
      sub_080B7EA0(param_1,param_1 + 0x54,&local_28,0,&DAT_08365af0,0x18);
    }
    else {
      sub_080B8048(param_1,param_1 + 0x54,&local_28,0x20,&DAT_08365af0,0x18);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  if (*(char *)(param_1 + 0x13) != '\0') {
    iVar2 = *(int *)(param_1 + 0x60) + 0x15;
    *(int *)(param_1 + 0x60) = iVar2;
    if (0x700 < iVar2) {
      *(undefined4 *)(param_1 + 0x60) = 0x700;
    }
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  sub_080177F4(param_1);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if (*(char *)(param_1 + 0x13) == '\0') {
    if (cVar3 == '\0') {
      sub_0808DE54(param_1);
    }
  }
  else if ((cVar3 == '\0') || (sVar1 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54)), sVar1 != 0)) {
    sub_0808DE54(param_1);
  }
  return in_lr;
}

