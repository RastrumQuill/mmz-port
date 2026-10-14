// sub_08076F74 at 0x08076F74 (thumb)

undefined4 sub_08076F74(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_08854834 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 1;
  *(undefined *)(param_1 + 0xe) = 0;
  *(undefined *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined *)(param_1 + 0xc4) = 0xff;
  *(undefined *)(param_1 + 0xb4) = 0xff;
  *(undefined *)(param_1 + 0xb5) = 0;
  *(undefined *)(param_1 + 0xb6) = 0xff;
  *(undefined *)(param_1 + 0xb7) = 0;
  *(undefined *)(param_1 + 0xc6) = 0;
  *(undefined *)(param_1 + 199) = 0;
  *(undefined2 *)(param_1 + 0xd4) = 0;
  *(undefined *)(param_1 + 0xd6) = 0xff;
  *(undefined *)(param_1 + 0xd7) = 0;
  *(bool *)(param_1 + 0xc5) = *(int *)(param_1 + 0xb8) + 0x7800 < *(int *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  sub_0801CC9C(param_1);
  *(undefined *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  sub_08050408(param_1,&DAT_08859d24,0x60);
  sub_08001D30(&DAT_08c44c30,(DAT_0202e178 - 0x280) * 0x20 + 0x10000);
  sub_08002208(&DAT_08c44c3c,(DAT_0202df78 - 5) * 0x20 + 0x200);
  uVar1 = sub_080AC28C(param_1);
  *(undefined4 *)(param_1 + 200) = uVar1;
  uVar1 = sub_080AC7D4(param_1);
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  sub_08077098(param_1);
  return in_lr;
}

