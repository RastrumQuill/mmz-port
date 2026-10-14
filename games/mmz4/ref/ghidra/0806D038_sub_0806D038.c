// sub_0806D038 at 0x0806D038 (thumb)

undefined4 sub_0806D038(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 in_lr;
  
  sub_08001D30(&DAT_08c44a8c,(DAT_0202e14e - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44a98,(DAT_0202df4e - 4) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_0801CF00(param_1,0x8700);
  sub_0801CFF0(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08858fe0,8);
  *(undefined4 *)(param_1 + 0x98) = 0x806d8ad;
  iVar1 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar1 = iVar1 + (iVar2 - iVar3 >> 1);
  *(int *)(param_1 + 0x54) = iVar1;
  iVar1 = sub_08008748(iVar1,*(undefined4 *)(param_1 + 0x58));
  iVar2 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  iVar3 = sub_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0x58) = iVar1 + (iVar2 - iVar3 >> 1);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x58);
  uVar5 = 0;
  puVar6 = (undefined4 *)(param_1 + 0xb4);
  do {
    uVar4 = sub_080A2ED4(param_1,0,uVar5 & 0xff);
    *puVar6 = uVar4;
    puVar6 = puVar6 + 1;
    sub_080A2F3C(param_1,uVar4,1,uVar5 & 0xff);
    *(undefined *)(param_1 + 0xd4 + uVar5) = 0;
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  *(undefined *)(param_1 + 0xda) = 0;
  *(undefined *)(param_1 + 0xdb) = 0;
  *(undefined *)(param_1 + 0xd9) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0806D194(param_1);
  return in_lr;
}

