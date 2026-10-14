// sub_080553C0 at 0x080553C0 (thumb)

undefined4 sub_080553C0(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  sub_0800393C(&DAT_085d8050,(DAT_0202facc - 0x378) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d805c,(DAT_0202f8cc - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d803c,(DAT_0202faca - 0x328) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8048,(DAT_0202f8ca - 6) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8014,(DAT_0202fac6 - 0x240) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8020,(DAT_0202f8c6 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8028,(DAT_0202fac8 - 0x2df) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8034,(DAT_0202f8c8 - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8064,(DAT_0202face - 0x39b) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8070,(DAT_0202f8ce - 5) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d8078,(DAT_0202fad0 - 0x3ae) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8084,(DAT_0202f8d0 - 7) * 0x20 + 0x200);
  sub_0800393C(&DAT_085d808c,(DAT_0202fad2 - 0x3ee) * 0x20 + 0x10000);
  sub_08003E14(&DAT_085d8098,(DAT_0202f8d2 - 8) * 0x20 + 0x200);
  sub_0801749C(param_1);
  sub_080176EC(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  sub_08017700(param_1,0xb319);
  sub_080177F4(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_0803D3D4(param_1,&DAT_083603e0,0x40);
  *(undefined4 *)(param_1 + 0x98) = 0x80577d5;
  uVar1 = sub_0800A2CC(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xb8) = uVar1;
  uVar1 = sub_0800A4B4(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  uVar1 = sub_0800A104(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xd4) = uVar1;
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined *)(param_1 + 0xc5) = 0;
  *(undefined *)(param_1 + 0xc6) = 0;
  *(undefined *)(param_1 + 199) = 0;
  *(undefined2 *)(param_1 + 0xca) = 0x100;
  *(undefined *)(param_1 + 0xcc) = 0;
  *(undefined *)(param_1 + 0xcd) = 0;
  *(undefined2 *)(param_1 + 0xd8) = 0x3c;
  *(undefined *)(param_1 + 0xdd) = 0x30;
  *(undefined *)(param_1 + 0xcf) = 0;
  *(undefined *)(param_1 + 0xdc) = 0xe;
  *(undefined *)(param_1 + 0xde) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0x10;
  *(undefined2 *)(param_1 + 0xd2) = 0x200;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined *)(param_1 + 0xce) = 0x18;
  sub_080A9520(param_1,1,0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_0835e0e8 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  sub_0805568C(param_1);
  return in_lr;
}

