// sub_080D8FB0 at 0x080D8FB0 (thumb)

undefined4 sub_080D8FB0(int param_1)

{
  char cVar1;
  undefined uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 in_lr;
  
  puVar4 = (undefined4 *)(param_1 + 0xb4);
  cVar1 = sub_080D546C(param_1,puVar4,param_1 + 0x5c,param_1 + 0xc4,2,0,0xfffff400);
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_1 + 0x54) = *puVar4;
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0xb8);
    uVar2 = sub_080EF330(*(byte *)(param_1 + 0x12) + 1,0x30);
    *(undefined *)(param_1 + 0x12) = uVar2;
    uVar3 = sub_080EF2B8((uint)*(byte *)(param_1 + 0x12) << 8,0x30);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (short)(&DAT_080ef450)[uVar3 & 0xff] * -4;
  }
  else {
    *puVar4 = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    if (cVar1 == '\0') {
      *(undefined *)(param_1 + 0xe) = 0;
      sub_080D8F54(param_1);
    }
    else {
      *(undefined *)(param_1 + 0xe) = 2;
      sub_080D9044(param_1);
    }
  }
  return in_lr;
}

