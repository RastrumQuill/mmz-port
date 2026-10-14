// sub_0808899C at 0x0808899C (thumb)

undefined4 sub_0808899C(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0x10) == '\x02') && (*(int *)(param_1 + 0x58) < DAT_0202e48c + 0x1000)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08362110 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
    *(undefined *)(param_1 + 0xd) = (&DAT_08365110)[*(byte *)(param_1 + 0x10)];
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 6;
    sub_0800736C(param_1 + 0x74,&DAT_08364fdc,param_1 + 0x54,2);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0x8088e35;
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x58);
    sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    if (sVar3 == 0) {
      *(undefined *)(param_1 + 0xc2) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xc2) = 1;
    }
    if (*(char *)(param_1 + 0x10) != '\x04') {
      sub_0801749C(param_1);
      bVar1 = 0 < *(int *)(DAT_0202f5c0 + 0x54) - *(int *)(param_1 + 0x54);
      if (bVar1) {
        bVar2 = *(byte *)(param_1 + 10) | 0x10;
      }
      else {
        bVar2 = *(byte *)(param_1 + 10) & 0xef;
      }
      *(byte *)(param_1 + 10) = bVar2;
      *(bool *)(param_1 + 0x4c) = bVar1;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      sub_08017700(param_1,*(undefined2 *)(&DAT_08365116 + (uint)*(byte *)(param_1 + 0x10) * 2));
    }
    if ((*(char *)(param_1 + 0x10) == '\x01') && (iVar4 = sub_0800710C(DAT_020305e8), iVar4 != 0)) {
      *(undefined *)(iVar4 + 0x25) = 0x18;
      *(undefined *)(iVar4 + 9) = 0x30;
      *(undefined4 *)(iVar4 + 0x14) = 0x808899d;
      *(undefined2 *)(iVar4 + 0x20) = 0;
      *(undefined *)(iVar4 + 0x22) = 0;
      *(byte *)(iVar4 + 0xb) = *(byte *)(iVar4 + 0xb) | 0x10;
      *(undefined *)(iVar4 + 0x1d) = *(undefined *)(iVar4 + 0x1c);
      *(undefined *)(iVar4 + 0x10) = 4;
      *(int *)(iVar4 + 0x28) = param_1;
    }
    if ((*(char *)(param_1 + 0x10) == '\0') || (*(char *)(param_1 + 0x10) == '\x03')) {
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x7ff;
      sVar3 = sub_08009A3C(*(undefined4 *)(param_1 + 0x54));
      if (sVar3 != 0) {
        uVar5 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar5;
      }
    }
    iVar4 = sub_08063614(param_1);
    if (iVar4 != 0) {
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836509c + (uint)*(byte *)(param_1 + 0xd) * 4));
      sub_080FE2C0(param_1,*(undefined4 *)(&DAT_083650d0 + (uint)*(byte *)(param_1 + 0xd) * 4));
    }
    sub_08088BA4(param_1);
  }
  return in_lr;
}

