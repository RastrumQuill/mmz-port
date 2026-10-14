// sub_0805CCC0 at 0x0805CCC0 (thumb)

undefined4 sub_0805CCC0(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 0x200) != 0) || (*(short *)(param_1 + 0xa4) == 0)) &&
     ((DAT_0202ec38 & 0x10) == 0)) {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0833a138 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0805CE7C(param_1);
    return in_lr;
  }
  piVar2 = (int *)(param_1 + 0xd4);
  if (*piVar2 != 0) {
    *piVar2 = *piVar2 + -1;
  }
  if (*(byte *)(param_1 + 0xd) < 3) goto LAB_0805ce2c;
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    if (*(int *)(param_1 + 0x2c) == 0) {
      iVar5 = sub_0801E11C(0x16,param_1,&DAT_0833ce4c);
      *(int *)(param_1 + 0x2c) = iVar5;
      if (iVar5 != 0) goto LAB_0805cd4c;
    }
    else {
LAB_0805cd4c:
      sub_080032EC(0x70);
    }
    sub_080127E4(param_1,0x5036);
    *(undefined *)(param_1 + 0xda) = 0x40;
  }
  cVar1 = *(char *)(param_1 + 0xda);
  if (cVar1 == '\0') {
    pcVar6 = (char *)(param_1 + 0xbf);
    cVar1 = *pcVar6;
    *pcVar6 = cVar1 + -1;
    if ((char)(cVar1 + -1) == '\0') {
      sub_080127E4(param_1,0x5035);
      sub_08015518(1,param_1 + 0x54);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      cVar1 = sub_080EF330(uVar3 * 2 >> 0x11,0xbe);
      *pcVar6 = cVar1 + '?';
    }
  }
  else {
    cVar1 = cVar1 + -1;
    *(char *)(param_1 + 0xda) = cVar1;
    if (cVar1 == '\0') {
      sub_080127E4(param_1,0x5035);
      uVar3 = DAT_0202e188 * 0x343fd + 0x269ec3;
      DAT_0202e188 = uVar3 & 0x7fffffff;
      cVar1 = sub_080EF330(uVar3 * 2 >> 0x11,0xbe);
      *(char *)(param_1 + 0xbf) = cVar1 + '?';
    }
  }
  if (*piVar2 == 0) {
    uVar4 = 0xffffff80;
  }
  else {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  if (*(int *)(param_1 + 0x54) < 0x1e000) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
LAB_0805ce2c:
  if ((*(int *)(param_1 + 0x2c) != 0) && (iVar5 = sub_0801E4D8(), iVar5 != 0)) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  sub_080EF118(param_1,*(undefined4 *)(&DAT_0833cdf4 + (uint)*(byte *)(param_1 + 0xd) * 4));
  DAT_0202e02c = *(undefined4 *)(param_1 + 0x58);
  DAT_0202e028 = *(undefined4 *)(param_1 + 0x54);
  return in_lr;
}

