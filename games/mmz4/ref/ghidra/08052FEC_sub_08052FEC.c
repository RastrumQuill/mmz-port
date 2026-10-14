// sub_08052FEC at 0x08052FEC (thumb)

undefined4 sub_08052FEC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 4;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb4) = 0;
  iVar1 = sub_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xb8) = iVar1;
  iVar1 = sub_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(int *)(param_1 + 0xbc) = iVar1;
  *(int *)(param_1 + 0x54) = iVar1 + -0x3700;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8) + -0x37ff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_08001D30(&DAT_08c4435c,(DAT_0202e096 - 800) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44368,(DAT_0202de96 - 8) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44320,(DAT_0202e090 - 0x2ab) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4432c,(DAT_0202de90 - 6) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44334,(DAT_0202e092 - 0x2ff) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44340,(DAT_0202de92 - 7) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c4430c,(DAT_0202e08e - 0x27b) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44318,(DAT_0202de8e - 5) * 0x20 + 0x200);
  sub_08001D30(&DAT_08c44280,(DAT_0202e080 - 0x200) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c4428c,(DAT_0202de80 - 4) * 0x20 + 0x200);
  sub_0801CC9C(param_1);
  sub_0801CEEC(param_1);
  *(undefined *)(param_1 + 0x25) = 0x1a;
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08854d2c,0x40);
  iVar3 = param_1 + 0x54;
  iVar1 = sub_080EC3F4(param_1,iVar3,0,0);
  *(int *)(param_1 + 0xc0) = iVar1;
  iVar1 = sub_080EBE50(param_1,iVar3,0,0);
  *(int *)(param_1 + 0xc4) = iVar1;
  uVar2 = sub_080EBE50(param_1,iVar3,1,0);
  *(undefined4 *)(param_1 + 200) = uVar2;
  if ((*(int *)(param_1 + 0xc0) == 0) || (*(int *)(param_1 + 0xc4) == 0)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 0xc);
  }
  else {
    sub_0805325C(param_1);
  }
  return in_lr;
}

