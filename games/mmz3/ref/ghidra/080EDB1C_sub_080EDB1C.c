// sub_080EDB1C at 0x080EDB1C (thumb)

undefined4
sub_080EDB1C(int param_1,uint param_2,undefined4 param_3,byte param_4,char param_5,undefined param_6
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  sub_080E9604(&DAT_0836f268 + *(ushort *)((int)&DAT_0836ea16 + ((uint)(param_1 << 0x18) >> 0x17)),7
               ,param_6);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[(param_2 & 0xff) + 0x28],9,param_6);
  iVar1 = sub_080FE460(param_3,0x20f580);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0xe,param_6);
  uVar2 = sub_080FE460(param_3,0x34bc0);
  iVar1 = sub_080FE4D8(uVar2,10);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0xf,param_6);
  sub_080E9604(&DAT_0836f283,0x10,param_6);
  uVar2 = sub_080FE460(param_3,36000);
  iVar1 = sub_080FE4D8(uVar2,6);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0x11,param_6);
  uVar2 = sub_080FE460(param_3,0xe10);
  iVar1 = sub_080FE4D8(uVar2,10);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0x12,param_6);
  sub_080E9604(&DAT_0836f285,0x13,param_6);
  uVar2 = sub_080FE460(param_3,600);
  iVar1 = sub_080FE4D8(uVar2,6);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0x14,param_6);
  uVar2 = sub_080FE460(param_3,0x3c);
  iVar1 = sub_080FE4D8(uVar2,10);
  sub_080E9604(&DAT_0836f268 + (ushort)(&DAT_0836e9d8)[iVar1 + 0x1e],0x15,param_6);
  if (param_4 != 0) {
    if (9 < param_4) {
      iVar1 = sub_080FE460(param_4,10);
      sub_080E9604(&DAT_0836f268 + *(ushort *)(&DAT_0836ea14 + ((uint)(iVar1 << 0x18) >> 0x17)),0x17
                   ,param_6);
    }
    iVar1 = sub_080FE4D8(param_4,10);
    sub_080E9604(&DAT_0836f268 + *(ushort *)(&DAT_0836ea14 + ((uint)(iVar1 << 0x18) >> 0x17)),0x18,
                 param_6);
  }
  if (param_5 == '\x01') {
    sub_080E9604(&DAT_0836f279,0x19,param_6);
  }
  else if (param_5 == '\x02') {
    sub_080E9604(&DAT_0836f27c,0x19,param_6);
  }
  return in_lr;
}

