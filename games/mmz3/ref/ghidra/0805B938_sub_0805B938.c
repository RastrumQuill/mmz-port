// sub_0805B938 at 0x0805B938 (thumb)

undefined4 sub_0805B938(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_0800393C(&DAT_085d8140,(DAT_0202fae4 - 0x280) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d814c,(DAT_0202f8e4 - 5) * 0x20 + 0x200);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xb500);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined *)(param_1 + 0xbd) = 0;
  *(undefined *)(param_1 + 0xbe) = 0;
  sub_0803D3D4(param_1,&DAT_08361600,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x805d531;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  uVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54));
  uVar2 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),uVar1);
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  uVar1 = sub_0800A3C4(*(undefined4 *)(param_1 + 0x54),uVar1);
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  sub_0805BA48(param_1);
  return in_lr;
}

