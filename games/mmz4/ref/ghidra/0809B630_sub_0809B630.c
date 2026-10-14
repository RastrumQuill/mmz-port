// sub_0809B630 at 0x0809B630 (thumb)

undefined4 sub_0809B630(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  short local_2c [4];
  int local_24;
  
  sub_08128B5C(local_2c,&DAT_08129570,8);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    local_24 = uVar4 * 2 + -1;
    iVar1 = 0;
    do {
      uVar6 = iVar1 << 6;
      iVar7 = 0;
      iVar1 = iVar1 + 1;
      psVar5 = local_2c;
      do {
        uVar2 = DAT_0202dc38 * 0x343fd + 0x269ec3;
        DAT_0202dc38 = uVar2 & 0x7fffffff;
        uVar6 = uVar6 + local_24 * ((uVar2 * 2 >> 0x11 & 7) + 0xf);
        iVar3 = sub_080DE5B8(param_1,(int)*psVar5,uVar6 & 0xff,uVar4);
        if (iVar3 == 0) break;
        *(char *)(param_1 + 0xb6) = *(char *)(param_1 + 0xb6) + '\x01';
        psVar5 = psVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 4);
    } while (iVar1 < 4);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(char *)(param_1 + 0xb6) == '\0') {
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_0885a604 + (uint)*(byte *)(param_1 + 9) * 4) + 8);
    sub_0809B714(param_1);
  }
  return in_lr;
}

