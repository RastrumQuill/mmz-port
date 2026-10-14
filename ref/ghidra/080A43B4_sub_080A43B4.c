// sub_080A43B4 at 0x080A43B4 (thumb)

undefined4 sub_080A43B4(int param_1)

{
  byte bVar1;
  undefined uVar2;
  undefined4 in_lr;
  undefined2 auStack_28 [8];
  
  sub_0809C6C4();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  sub_0809C930(param_1,0);
  sub_0809C980(param_1);
  *(undefined *)(param_1 + 0x44) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 0x48;
  *(undefined **)(param_1 + 0x28) = &DAT_082b5db8;
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  bVar1 = *(byte *)(param_1 + 0x10);
  if ((bVar1 & 1) == 0) {
    sub_080C8D70(auStack_28,&DAT_080c94b8,8);
    sub_080C8D70(auStack_28 + 4,&DAT_080c94c0,8);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5d9c,param_1 + 0x4c,0x10);
    *(int *)(param_1 + 0xb4) = param_1;
    *(uint *)(param_1 + 0xb0) = bVar1 & 1;
    *(undefined2 *)(param_1 + 200) = auStack_28[*(byte *)(param_1 + 0x10) >> 4];
    *(undefined2 *)(param_1 + 0xca) = (auStack_28 + 4)[*(byte *)(param_1 + 0x10) >> 4];
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    sub_080055FC(param_1 + 0x74,&DAT_082b5d80,param_1 + 0x4c,0x10);
    *(int *)(param_1 + 0xb4) = param_1;
    *(undefined4 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xca) = 0;
    *(undefined2 *)(param_1 + 200) = 0;
  }
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
    uVar2 = 0x40;
  }
  else {
    uVar2 = 0x80;
  }
  *(undefined *)(param_1 + 0x12) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) =
       *(undefined4 *)(*(int *)(&DAT_082b5184 + (uint)*(byte *)(param_1 + 9) * 4) + 4);
  *(undefined *)(param_1 + 0xd) = 0;
  *(undefined *)(param_1 + 0xe) = 1;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    *(undefined *)(param_1 + 0xf) = 1;
  }
  else {
    *(undefined *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}

