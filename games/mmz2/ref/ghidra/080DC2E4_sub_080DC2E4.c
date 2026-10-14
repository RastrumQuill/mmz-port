// sub_080DC2E4 at 0x080DC2E4 (thumb)

undefined4 sub_080DC2E4(int param_1)

{
  byte bVar1;
  short sVar2;
  short *psVar3;
  char cVar4;
  undefined4 in_lr;
  
  psVar3 = *(short **)(param_1 + 0x2c);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  sub_08012580(param_1);
  bVar1 = *(byte *)(param_1 + 0x10);
  cVar4 = bVar1 * '\x02';
  sVar2 = sub_080EF150((int)*psVar3,5);
  if ((int)sVar2 == bVar1 + 2) {
    cVar4 = cVar4 + '\x01';
  }
  *(char *)(param_1 + 0x11) = cVar4;
  sub_080127E4(param_1,*(undefined2 *)(&DAT_0834bdec + (uint)*(byte *)(param_1 + 0x11) * 2));
  *(undefined4 *)(param_1 + 0x54) = 0x1800;
  *(uint *)(param_1 + 0x58) = (uint)*(byte *)(param_1 + 0x10) * 0x1800 + 0x5800;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((&DAT_0834b8b4)[*(byte *)(param_1 + 9)] + 4);
  sub_080DC360(param_1);
  return in_lr;
}

