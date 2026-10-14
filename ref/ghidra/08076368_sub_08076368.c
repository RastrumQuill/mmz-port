// sub_08076368 at 0x08076368 (thumb)

undefined4 sub_08076368(int param_1)

{
  undefined4 in_lr;
  
  sub_0801D520(DAT_0202286c,0xff);
  sub_0809046C(param_1,0,0xffffe000,9);
  sub_0809046C(param_1,0x800,0xfffff000,10);
  sub_0809046C(param_1,0xfffff800,0xfffff000,9);
  sub_0809046C(param_1,0x800,0xfffff800,9);
  sub_0809046C(param_1,0xfffff800,0xfffff800,10);
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082aeadc + (uint)*(byte *)(param_1 + 9) * 4) + 0x10);
  return in_lr;
}

