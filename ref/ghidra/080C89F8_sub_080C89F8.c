// sub_080C89F8 at 0x080C89F8 (thumb)

void sub_080C89F8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  uint uVar2;
  undefined2 *puVar3;
  code *pcVar4;
  undefined2 local_d0;
  
  puVar3 = &local_d0;
  uVar1 = DAT_04000204;
  DAT_04000204 = uVar1 & 0xfffc | 3;
  pcVar4 = sub_080C89C8;
  for (uVar2 = 0x180000; uVar2 >> 0x10 != 0; uVar2 = ((uVar2 >> 0x10) - 1) * 0x10000) {
    *puVar3 = *(undefined2 *)pcVar4;
    pcVar4 = (code *)((int)pcVar4 + 2);
    puVar3 = puVar3 + 1;
  }
  sub_080C8AA0(param_1,param_2,param_3,(int)&local_d0 + 1);
  return;
}

