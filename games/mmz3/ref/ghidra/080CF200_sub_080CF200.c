// sub_080CF200 at 0x080CF200 (thumb)

undefined4 sub_080CF200(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 in_lr;
  
  iVar3 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54);
  cVar1 = sub_08009038(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (((cVar1 == '\0') || (iVar3 < 0x4001)) && (iVar3 < 0x8001)) {
    if (*(int *)(DAT_0202f5c0 + 0x58) < *(int *)(param_1 + 0x58) + -0x100) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
      *(undefined **)(param_1 + 0x30) = &DAT_0836ce90;
      *(undefined2 *)(param_1 + 0x26) = 0x8801;
    }
    else {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    }
    psVar5 = (short *)(param_1 + 0xb6);
    *psVar5 = *psVar5 + 1;
    sVar2 = sub_080FE390((int)*psVar5,0xf);
    *psVar5 = sVar2;
    if ((sVar2 == 0) && (uVar4 = sub_0801A9A8(&DAT_02030288,param_1 + 0x54), uVar4 < 0x4000)) {
      if ((*(char *)(param_1 + 0xd) == '\x01') || (*(char *)(param_1 + 0xd) == '\x04')) {
        sub_0800471C(0x127);
      }
      else {
        sub_0800471C(0x126);
      }
    }
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836ce34 + (uint)*(byte *)(param_1 + 0xd) * 4));
    sub_080FE2C0(param_1,*(undefined4 *)(&DAT_0836ce48 + (uint)*(byte *)(param_1 + 0xd) * 4));
  }
  else {
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xf7;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0836c2ec + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  return in_lr;
}

